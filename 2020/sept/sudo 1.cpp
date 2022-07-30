
In the minJumps function(array,array size)
    IF n<=1
        return 0
    END IF
    IF array[0] equal to 0
        return -1
    END IF

    maxReach<- array[0]

    step <- array[0]

    jump<-1
    i<-1
    FOR i=1 to n
        IF i equal to size -1
            return jump
        END IF
        maxReach <- maximum of maxReach and i+array[i]
        decrement step
        IF step equal to 0
            increment jump
            IF i>= maxReach
                return -1
            END IF
            step<-maxReach-i
        END IF
    END FOR
    return -1


In the main
    Take input from user
    size <- array size
    Function pass array and array size to minJumps
    Output to the user
