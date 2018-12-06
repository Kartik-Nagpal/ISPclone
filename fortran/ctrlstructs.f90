       program ctrlstrcts

       implicit none
       integer :: a=3, b=4, c=5

       if (a < b .and. b < c) then
              print *, "c is the biggest of them all!"
       else if (a < b .and. b > c) then
              print *, "b is the biggest of them all!"
       else if (a > c .and. a > b) then
              print *, "a is the biggest of them all"
       end if
        

        if (a > b .or. c > b) then
              print *, "one of the conditions is .true."
        else
              print *, "none of the conditions are .true."
        end if
        end program
