#include "../unity/unity.h"
#include "../inc/application.h"

/* Prototypes for all the test functions */
void test_add(void);
void test_display(void);
void test_search(void);
void test_update(void);
void test_delete(void);

void setUp(){}
void tearDown(){}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
   RUN_TEST  (add);
   RUN_TEST (display);
   RUN_TEST (search);
   RUN_TEST (update);
   RUN_TEST (delete);
   
    /* Close the Unity Test Framework */
   return UNITY_END();

}

void add(void)
{
   int A=3,B=2,answer=5; 
   TEST_ASSERT_EQUAL(answer ,add(A,B) );
}

void display(void)
{
    int C=9,D=0,Answer=9;
   TEST_ASSERT_EQUAL( Answer, display(C,D) );
}

void search(void)
{
    int E=6,F=7,ans=13;
   TEST_ASSERT_EQUAL( ans,search(E,F) );
}


void update(void)
{
    int G=5,H=5,answ=10;
   TEST_ASSERT_EQUAL( answ, update(G,H) );
}


void delete(void)
{
   int I=4,J=3,answe=7;
   TEST_ASSERT_EQUAL( answe,delete(I,J) );
}
