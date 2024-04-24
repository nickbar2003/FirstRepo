package edu.gonzaga.Farkle;

/*
* Class for extending the Combo class. In order to detect combos of three of a kind+
*/

import java.util.ArrayList;

public class TriplePlus extends Combo {
    private Integer searchValue;

    public TriplePlus(Integer searchValue) {
        this.searchValue = searchValue;
    }

    /**
     * Detects if the meld contains 3 of a kind or more by seeing if any indexes
     * have a value of 3 or more. It score accordingly
     * and removes the dice from the array list to reflect the usage of the dice.
     * 
     * @param ArrayList<Integer> meldValues is the ArrayList that represents the
     *                           frequency of values in a meld
     */
    @Override
    public void detectCombo(ArrayList<Integer> meldValues) {
        this.score = 0;
        this.isFound = false;

        if (meldValues.get(searchValue) >= 3) {
            this.isFound = true;
            if (searchValue == 1) {
                this.score = 1000;
            } else {
                this.score = (searchValue * 100);
            }

            if (meldValues.get(searchValue) > 3) {
                this.score += ((meldValues.get(searchValue) - 3) * searchValue * 100);
            }

            meldValues.set(searchValue, 0);
        }

    }
}
