package edu.gonzaga.Farkle;
/*
* Class for scoring single and double fives in a farkle meld
*/

import java.util.ArrayList;

public class Fives extends Combo {

    /**
     * Detects whether there is one or two dice left in a meld by looking at the
     * Integer at index 5 of the meldValues array
     * Decrements the array to reflect the usage of the dice.
     * 
     * @param ArrayList<Integer> meldValues representing the frequency of dice
     *                           values in a meld
     */
    @Override
    public void detectCombo(ArrayList<Integer> meldValues) {
        this.score = 0;
        this.isFound = false;

        if (meldValues.get(5) > 0) {
            this.isFound = true;
            this.score = meldValues.get(5) * 50;

            meldValues.set(5, 0);
        }

    }

}