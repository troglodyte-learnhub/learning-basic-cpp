/*
   Troglobyte LearnHub:
   author: Michael Gene Brockus
   gmail: <michaelbrockus@gmail.com>
*/
#include <stdio.h>
#include <troglodyte/utest.h>

extern void solve(void);


static void test_01_callSolveFunction(void)
{
    solve();

    //
    // test tracker tag
    trog_utest_output(__FILE__, __func__);

} // end of test case


/*
 >
 > main is where program execution starts and foundation
 > is where the magic begins. Here we use main as a test
 > driver to see if you solved the problem.
 >
*/
int main(int argc, char **argv)
{
    //
    // setup and teardown can be set to nullptr.
    UTestRunner *runner = trog_utest_init(NULL, NULL);

    //
    // list of test cases being ran in this
    // project.
    trog_utest_run(runner, test_01_callSolveFunction);

    return trog_utest_end(runner);
} // end of func
