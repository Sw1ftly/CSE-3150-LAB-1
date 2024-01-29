#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "prefix_sum.h"

int test_ary_0[]={};
int test_ary_1[]={1,-1};
int test_ary_2[]={1,1,1,1,1,1,1,1,1};
int test_ary_3[]={-1,-1,-1,-1,-1};
int test_ary_4[]={1,-1,1,1,1,-1};
int test_ary_5[]={-1,-1,1,1,1};



TEST_CASE("non_positive_prefix"){
    CHECK_FALSE(! non_positive_prefix(test_ary_0,sizeof(test_ary_0)/sizeof(test_ary_0[0])));
    CHECK_FALSE(non_positive_prefix(test_ary_1,sizeof(test_ary_1)/sizeof(test_ary_1[0])));
    CHECK_FALSE(non_positive_prefix(test_ary_2,sizeof(test_ary_2)/sizeof(test_ary_2[0])));
    CHECK_FALSE(! non_positive_prefix(test_ary_3,sizeof(test_ary_3)/sizeof(test_ary_3[0])));
    CHECK_FALSE(non_positive_prefix(test_ary_4,sizeof(test_ary_4)/sizeof(test_ary_4[0])));
    CHECK_FALSE(non_positive_prefix(test_ary_5,sizeof(test_ary_5)/sizeof(test_ary_5[0])));
}

    
TEST_CASE("non_negative_prefix"){ 
    CHECK_FALSE(! non_negative_prefix(test_ary_0,0));
    CHECK_FALSE(! non_negative_prefix(test_ary_1,sizeof(test_ary_1)/sizeof(test_ary_1[0])));
    CHECK_FALSE(! non_negative_prefix(test_ary_2,sizeof(test_ary_2)/sizeof(test_ary_2[0])));
    CHECK_FALSE(non_negative_prefix(test_ary_3,sizeof(test_ary_3)/sizeof(test_ary_3[0])));
    CHECK_FALSE(! non_negative_prefix(test_ary_4,sizeof(test_ary_4)/sizeof(test_ary_4[0])));
    CHECK_FALSE(non_negative_prefix(test_ary_5,sizeof(test_ary_5)/sizeof(test_ary_5[0])));  
}


