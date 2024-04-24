
package edu.gonzaga.Farkle;

/**
 * This Program replecates the game Farkle, but is terminal based!
 *  CPSC 224, Fall 2023 
 *  Homework 1
 *  No sources to cite, but much of the code was written considering replicating parts of Dr. Crandall's C++ version 
 *
 * @author Nicholas Barinaaga
 * @version HW1
*/

/** Main program class for launching Farkle program. */
public class Farkle {
    // This main is where your Farkle game starts execution for general use.
    public static void main(String[] args) {
        Round round = new Round();
        round.playRound();

    }
}
