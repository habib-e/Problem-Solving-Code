//this function will calculate the total number of jumps
int type function jumps(Argument one(array A[]), Argument two){
    IF Argument two less than or epual to 1 return zero
                                         INIT array A first value in
                                             variable ladder and
                                     stairs

                                         Declare variable jump and
                                     INIT 1 to jump

                                             FOR each value level < -1 to n
                                                                            IF level equal to n -
                                                                        1 Return jumps
                                                                            END IF
                                                                                IF sum of level and
                                     A[level] is greater than ladder
                                             ladder < -sum of level and
                                     A[level] END IF
                                             decreasing stairs counter

                                                 IF stairs equal to 0 incrementing jump counter
                                                     stairs < -subtraction of ladder and
                                     level
                                         END IF
                                             END FOR
                                                 Return jump} END function jumps

{
    In the main function
        Take the array from user

            INIT n to size of the array

                Send the array and n to the jumps function
                    and print the result to the user
}