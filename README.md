# CSE-3150-LAB-1 

Notes: 
1. Instructions for function "non_postive_prefix" in lab pdf state that it should check that "+1 and -1 ints, never go above 0.". Thus I assumed that prefix sums that equal to "0" or are empty will still make the function return true. Only sums over 0 will make the function return a false statement. Hope I understood it right.
2. I used 6 unit tests on both function (empty set, all pos, all neg, randomly mixed, pos and neg prefix sums in same list etc.) They should be sufficient to prove that both functions work as intended
3. Doctests CHECK_TRUE wasnt working for me. Hence I opted to use CHECK_FALSE for false and true statements. For true outputs I simply used a " ! " to reverse the output.
4. If there are any questions feel free to email me (Uconn email)


HOW TO RUN UNIT TESTS: 

- copy all files and put into same directory/folder
- main_prefix_sum.cpp will not really be used but I included it since it was part of the lab lecture
- cd into correct dircetory
- now input following instructions :   g++ unit_tests_prefix_sum.cpp prefix_sum.cpp
- press enter and let compile
- then simply type:     ./a.out
- Code should produce proper output of doctest unit tests (test cases =2  , assertions= 12). All should pass
  
