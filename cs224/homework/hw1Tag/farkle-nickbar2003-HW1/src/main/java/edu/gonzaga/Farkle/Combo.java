package edu.gonzaga.Farkle;

/*
* Abstract Class for scoring combos in farkle
*/

import java.util.ArrayList;

public abstract class Combo {

    public Integer score;
    public Boolean isFound;

    /**
     * This abstract delcaration will allow us to mass an array with value frequency
     * of a meld to many different combo objects in order to detect different
     * combinations of dice.
     * 
     * @param meldValues
     */
    public abstract void detectCombo(ArrayList<Integer> meldValues);
}
