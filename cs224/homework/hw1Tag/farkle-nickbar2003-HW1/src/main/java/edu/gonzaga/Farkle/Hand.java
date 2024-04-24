package edu.gonzaga.Farkle;

/*
* Class for a Hand of dice used in Farkle.
*/

import java.util.ArrayList;
import java.util.Collections;

/** Class to store the state of a Hand dice. */
public class Hand {
    private Integer numDice;

    protected ArrayList<Integer> handValues = new ArrayList<>();
    private ArrayList<Die> hand = new ArrayList<>();

    public Hand(Integer numDice) {
        this.numDice = numDice;

        for (Integer i = 0; i < this.numDice; i++) {
            Die die1 = new Die(6);
            this.hand.add(die1);
        }

        for (Integer i = 0; i < (this.numDice + 1); i++) {
            Integer startingValue = 0;
            this.handValues.add(startingValue);
        }

    }

    /**
     * Returns the number of dice in the hand
     * 
     * @return Integer number of dice in the hand
     */
    public Integer getNumDice() {
        return this.numDice;
    }

    /**
     * This function takes a die object and adds it to the hand arrayList
     * 
     * @param die
     */
    public void addDie(Die die) {
        hand.add(die);
    }

    /**
     * This function combines two ArrayList's of type Die
     * 
     * @param otherHand representing another hand of dice that you want to mix with
     *                  the current hand of dice
     */
    public void combineHands(ArrayList<Die> otherHand) {
        for (Integer i = 0; i < otherHand.size(); i++) {
            this.addDie(otherHand.get(i));
        }
        sortHand();
    }

    /**
     * This function performs the rolling of all the dice within the hand
     * 
     * ex: rolling 6 different dice
     */
    public void rollHand() {
        for (Integer i = 0; i < this.numDice; i++) {
            hand.get(i).roll();
        }
        sortHand();
    }

    // }
    /**
     * Sorts the dice hand in order of least to greatest
     */
    public void sortHand() {
        Collections.sort(hand);
    }

    /**
     * Populates handValues arrayList with the number of occurances of each possible
     * value of a Die object
     * values will reflect the number of die in the hand arrayList with sideUp
     * attribute of each die with in the hand
     */
    public void populateValues() {
        for (Integer i = 0; i < this.numDice; i++) {
            Integer sideUpValue = hand.get(i).getSideUp();
            handValues.set(sideUpValue, (handValues.get(sideUpValue) + 1));
        }

    }

    /**
     * Just a quick method for testing that the handValues arrayList reflects the
     * values of the hand arrayList
     */
    public void printHandValues() {
        String ret = "";
        ret += "values: ";

        for (Integer i = 1; i < (this.numDice + 1); i++) {
            ret += "index" + i + ": ";
            ret += handValues.get(i) + ", ";
        }
        System.out.println(ret);
    }

    /**
     * removes a die from the hand ArrayList
     * 
     * @return Die that is being removed
     */
    public Die removeDie(Integer valueToRemove) {
        for (Integer i = 0; i < hand.size(); i++) {
            if (hand.get(i).getSideUp() == valueToRemove) {
                Die dieToRemove = hand.get(i);
                hand.remove(dieToRemove);
                return dieToRemove;
            }
        }
        return null;
    }

    /**
     * Provides the ability to convert the Hand object into a string.
     * representation,
     * both with
     * .toString(), but also in System.out.println()
     *
     * @return String of whatever you want this Hand to say for itself
     */
    @Override
    public String toString() {
        String ret = "";
        ret += "Hand: ";

        if (!this.hand.isEmpty()) {
            for (Integer i = 0; i < (this.hand.size() - 1); i++) {
                ret += hand.get(i) + ", ";
            }
            ret += hand.get(this.hand.size() - 1);

        }

        return ret;
    }

}
