package edu.gonzaga.Farkle;

/**
 * This Class extends the Combo class in order to detect if a roll is a straight
 * 
 */

import java.util.ArrayList;

public class Straight extends Combo {

    /**
     * Detects if the meld contains a straight by seeing if there is exactly 1 value
     * for each index. If there is then it is a straight: 1,2,3,4,5,6. Otherwise it
     * is not a straight. It also decrements the array to show that all the dice
     * have been used
     *
     * @param ArrayList<Integer> meldValues is the ArrayList that represents the
     *                           frequency of values in a meld
     * 
     */
    @Override
    public void detectCombo(ArrayList<Integer> meldValues) {
        this.score = 0;
        for (Integer i = 1; i < meldValues.size(); i++) {
            if (meldValues.get(i) != 1) {
                this.isFound = false;
            }
        }
        if (this.isFound) {
            this.isFound = true;
            this.score = 1000;

            for (Integer i = 1; i < meldValues.size(); i++) {
                meldValues.set(i, 0);
            }
        }
    }
}
