#include "unity.h"
#include <feature.h>

/* Modify these two lines according to the project */
#include <feature.h>
#define PROJECT_NAME    "Electric_Line_Breaker"

/* Prototypes for all the test functions */
void test_park(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_park);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_Electric_Line_Breaker(void) {
  TEST_ASSERT_EQUAL(1, open(is_password_matching));
  TEST_ASSERT_EQUAL(2, open(getLineNumber));
  TEST_ASSERT_EQUAL(3, open(getLineState));
 
    /* Dummy fail*/
  // TEST_ASSERT_EQUAL(0, file does not exist);
  
}

 


  
 
