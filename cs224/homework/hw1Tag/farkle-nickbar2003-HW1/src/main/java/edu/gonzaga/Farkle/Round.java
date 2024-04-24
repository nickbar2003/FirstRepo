package edu.gonzaga.Farkle;
/*
 * Class to implement one round which is essentially one roll of a hand and the forming of a meld and its scoring
 */

import java.util.ArrayList;
import java.util.Scanner;

public class Round {
    private FarkleHand farkleHand;
    private Meld meld;
    private Boolean roundIsOver;

    public static final Integer STARTING_FARKLE_NUM_DICE = 6; // Farkle is always played with 6 dice

    // Below are both constructors, we default number of dice will be 6, but for
    // subsequent rounds we will want to be able to start with different amounts
    public Round() {
        this.farkleHand = new FarkleHand(STARTING_FARKLE_NUM_DICE);
        this.meld = new Meld();
        this.roundIsOver = false;
    }

    public Round(Integer numDice) {
        this.farkleHand = new FarkleHand(numDice);
        this.meld = new Meld();
        this.roundIsOver = false;
    }

    /**
     * Function that handles the interactions between the user and the system over
     * the course of one round (a roll and melding decisions)
     * 
     * This function is might be bloated and doing to much at the moment. In
     * addition to making all the proper calls to FarkleHand and Meld objects it
     * also
     * Handles the interaction with the player eventually there will be a turn and
     * player object above this one
     * 
     */
    public void playRound() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Starting Round");
        farkleHand.rollHand();
        farkleHand.populateValues();
        farkleHand.checkFarkle();

        if (farkleHand.getIsFarkle()) {
            System.out.println("Farkle!");
            return;
        } else {
            while (!roundIsOver) {
                System.out.println("----------------Hand and Meld---------------");
                System.out.println(farkleHand);
                System.out.println(meld);
                System.out.println("Enter value of die to add to meld.\n");
                System.out.println("Enter 0 to bank meld and end round\n");

                Integer dieValue = scanner.nextInt();
                if (dieValue == 0) {
                    if (meld.size() == 0) {
                        roundIsOver = true;
                    } else {
                        meld.populateValues();
                        meld.findCombos();

                        farkleHand.combineHands(meld.getUnusedDice());

                        System.out.println("Meld Score: " + meld.getScore());
                        System.out.println("Unused Di(c)e: " + farkleHand + "|");
                        roundIsOver = true;
                    }

                } else if (dieValue >= 1 && dieValue <= 6) {
                    Die dieToMeld = farkleHand.removeDie(dieValue);
                    if (dieToMeld != null) {
                        meld.addDie(dieToMeld);
                    }
                } else {
                    System.out.println("Invalid Input Detected");
                }
            }
        }

    }

}
