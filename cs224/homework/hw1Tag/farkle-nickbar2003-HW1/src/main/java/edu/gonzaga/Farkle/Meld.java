package edu.gonzaga.Farkle;

/*
* Class for a Meld of dice used in Farkle.
*/
import java.util.ArrayList;

public class Meld {

    private ArrayList<Die> diceInMeld;
    private ArrayList<Die> unusedDice;
    private ArrayList<Integer> meldValues;

    private Integer score;

    public Meld() {
        this.score = 0;
        diceInMeld = new ArrayList<>();
        unusedDice = new ArrayList<>();
        meldValues = new ArrayList<>();

    }

    /**
     * This function takes a die object and adds it to the diceInMeld arrayList
     * 
     * @param die
     */
    public void addDie(Die die) {
        diceInMeld.add(die);
    }

    /**
     * This function instantiants many different Combo objects and with them runs
     * through an array of Integers that represents the frequency of values in a
     * meld
     * These combos will then accordingly update the score field in this meld
     * object.
     * 
     * Lastly this function will create an ArrayList of type Die represnting any
     * dice not used in a combo
     *
     * 
     */
    public void findCombos() {
        Straight straightCombo = new Straight();
        ThreePair threePair = new ThreePair();
        TriplePlus triplePlusOnes = new TriplePlus(1);
        TriplePlus triplePlusTwos = new TriplePlus(2);
        TriplePlus triplePlusThrees = new TriplePlus(3);
        TriplePlus triplePlusFours = new TriplePlus(4);
        TriplePlus triplePlusFives = new TriplePlus(5);
        TriplePlus triplePlusSixes = new TriplePlus(6);
        Ones ones = new Ones();
        Fives fives = new Fives();

        straightCombo.detectCombo(this.meldValues);
        threePair.detectCombo(this.meldValues);
        triplePlusOnes.detectCombo(this.meldValues);
        triplePlusTwos.detectCombo(this.meldValues);
        triplePlusThrees.detectCombo(this.meldValues);
        triplePlusFours.detectCombo(this.meldValues);
        triplePlusFives.detectCombo(this.meldValues);
        triplePlusSixes.detectCombo(this.meldValues);
        ones.detectCombo(this.meldValues);
        fives.detectCombo(this.meldValues);

        if (straightCombo.isFound) {
            this.score += straightCombo.score;
        } else if (threePair.isFound) {
            this.score += threePair.score;
        } else {
            if (triplePlusOnes.isFound) {
                this.score += triplePlusOnes.score;
            }
            if (triplePlusTwos.isFound) {
                this.score += triplePlusTwos.score;
            }
            if (triplePlusThrees.isFound) {
                this.score += triplePlusThrees.score;
            }
            if (triplePlusFours.isFound) {
                this.score += triplePlusFours.score;
            }
            if (triplePlusFives.isFound) {
                this.score += triplePlusFives.score;
            }
            if (triplePlusSixes.isFound) {
                this.score += triplePlusSixes.score;
            }

            if (ones.isFound) {
                this.score += ones.score;
            }

            if (fives.isFound) {
                this.score += fives.score;
            }
        }

        fillUnusedDice();
    }

    /**
     * This function creates an ArrayList of type Die to represent the remaining
     * dice not scored in a meld.
     * It uses the meldValues ArrayList after it has been modifeid in the scoring
     * process
     */
    public void fillUnusedDice() {
        for (Integer dieValue = 1; dieValue < meldValues.size(); dieValue++) {
            while (meldValues.get(dieValue) > 0) {
                Die unusedDie = new Die();
                unusedDie.setSideUp(dieValue);
                unusedDice.add(unusedDie);

                meldValues.set(dieValue, meldValues.get(dieValue) - 1);
            }

        }
    }

    /**
     * This function fills an ArrayList of type Integer which represents the sideUp
     * values of the diceInMeld object.
     * This array reflects the frequency of the values in the meld.
     * Ex: if there are 3 dice with the value 4 in your meld then the index 4 of the
     * meldValue object will be 3.
     */
    public void populateValues() {
        if (!diceInMeld.isEmpty()) {
            // Initilizing the meldValues array to all be zeros before population
            for (Integer i = 0; i < 7; i++) {
                meldValues.add(0);
            }

            for (Integer i = 0; i < diceInMeld.size(); i++) {
                Integer sideUpValue = diceInMeld.get(i).getSideUp();
                meldValues.set(sideUpValue, (meldValues.get(sideUpValue) + 1));
            }

        }
    }

    /**
     * This is a getter for the unusedDice field
     * 
     * @return ArrayList of type Die representing the dice from the meld that were
     *         not used in combos
     */
    public ArrayList<Die> getUnusedDice() {
        return unusedDice;
    }

    /**
     * This is a getter for the score field
     * 
     * @return Integer representing the overall score of the meld
     */
    public Integer getScore() {
        return this.score;
    }

    /**
     * This is a getter returning the number of elements in the diceInMeld ArrayList
     * in terms of an Integer
     * 
     * @return Integer represning ArrayList size
     */
    public Integer size() {
        return diceInMeld.size();
    }

    /**
     * This function is similiar to the toString of the Hand class. It pretty much
     * just prints the contents of diceInMeld with, but in a formatted way.
     * 
     * Essentially this class is just representing by that ArrayList so it makes
     * sense that printing it woudl correlate to just showing the contents of that
     * field
     */
    @Override
    public String toString() {
        String ret = "";
        ret += "Meld: ";

        if (this.diceInMeld.size() != 0) {
            for (Integer i = 0; i < (this.diceInMeld.size() - 1); i++) {
                ret += diceInMeld.get(i) + ", ";
            }
            ret += diceInMeld.get(this.diceInMeld.size() - 1);

        }

        return ret;
    }

}
