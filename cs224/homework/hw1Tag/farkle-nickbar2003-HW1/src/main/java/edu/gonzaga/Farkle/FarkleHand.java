package edu.gonzaga.Farkle;
/*
* Class for a hand of dice used specificly in farkle
*/

public class FarkleHand extends Hand {
    private Boolean isFarkle;

    public FarkleHand(Integer numDice) {
        super(numDice);
        this.isFarkle = true;
    }

    /**
     * Returns whether the hand is a farkle or not
     * 
     * @return Boolean determining if the hand is a farkle
     */
    public Boolean getIsFarkle() {
        return this.isFarkle;
    }

    /**
     * Checks sorted ArrayList to see if the roll was a farkle
     * Updates IsFarkle field
     * Checks to see if there are any values of 1, 5, combos of 3 or more, or 3
     * pairs.
     * Doesn't need to check for straight as having just one 1 or one 5 makes
     * isFarkle false
     */
    public void checkFarkle() {
        if (handValues.get(1) != 0 || handValues.get(5) != 0) {
            this.isFarkle = false;
        }

        for (Integer i = 2; i < 7; i++) {
            if (handValues.get(i) >= 3) {
                this.isFarkle = false;
            }
        }

        Integer numPairs = 0;
        for (Integer i = 1; i < 7; i++) {
            if (handValues.get(i) == 2) {
                numPairs++;
            }
        }

        if (numPairs == 3) {
            this.isFarkle = false;
        }

    }
}
