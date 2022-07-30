//this removeDup function removes the duplicate character
Character type function removeDup(Argument one,Argument two)
{
    Declare character type set container s and
    insert Argument one in the s with
    initilizing the Argument one size in s

    set i to 0
    FOR each element on the s
        insert each element in Argument one
        increment counter
    END FOR

    INIT NULL character in
    the last index of Argument one

    Return Argument one
}
END function removeDup

//this function recreate the string by their order
Void type function rebuild(Argument one)
{
    Declare integer variables c,d and len and
    set d to 0

    Declare character variable ch and
    character pointer variable ptr and result

    set len to Argument one size

    set result to Argument one size

    Insert Argument one all element into ptr

    FOR each character from set 0 into ch to z
        FOR 0 to len length of Argument one
            IF ptr and ch are equal
                Insert each element of
                ptr into result pointer and
                increment result counter
            END IF
            Increment ptr counter
        END FOR
        INIT Argument one in ptr
    END FOR

    INIT NULL character in
    the last index of result and
    increment result counter

    Insert each element of result
    into Argument one

    Clear result pointer
}
END function rebuild

{
In the main function

    Take the string from the user

    initilize n to size of the string

    send the string and string size variable to
    the removeDup function and catch the return string

    send the returned string to the rebuild
    function and print the result to the user

}
