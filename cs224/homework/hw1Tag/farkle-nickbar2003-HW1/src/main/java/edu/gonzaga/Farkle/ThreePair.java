package edu.gonzaga.Farkle;

/*
* Class that extends the Combo class in order to detect if the is a Three pair combo in a meld
*/
import java.util.ArrayList;

public class ThreePair extends Combo {

    /**
     * Detects if the meld contains a ThreePiar by seeing if there is a value of 2
     * at exactly 3 different indexes.
     * If there is then we know how to score it. Decrements those corresponding
     * indexes by -2 in order to remove them from the scoring process
     *
     * @param ArrayList<Integer> meldValues is the ArrayList that represents the
     *                           frequency of values in a meld
     * 
     */
    @Override
    public void detectCombo(ArrayList<Integer> meldValues) {
        this.score = 0;
        this.isFound = false;
        Integer paircount = 0;

        for (Integer i = 1; i < meldValues.size(); i++) {
            if (meldValues.get(i) == 2) {
                paircount++;
            }
        }
        if (paircount == 3) {
            this.isFound = true;
            this.score = 750;

            for (Integer i = 1; i < meldValues.size(); i++) {
                if (meldValues.get(i) == 2) {
                    meldValues.set(i, 0);
                }
            }

        }

    }

}
