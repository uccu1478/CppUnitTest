#include "pch.h"
#include "CppUnitTest.h"
#include "../TestCPP/Solution.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            // Arrange
            Solution* solution = new Solution();
            vector<int> nums = { 2, 7, 11, 15 };
            int target = 9;
            vector<int> answer = { 0,1 };

            // Act
            vector<int> output = solution->twoSum(nums, target);
            std::sort(output.begin(), output.end());

            // Assert
            Assert::IsTrue(answer == output);
            
        }
        TEST_METHOD(TestMethod2)
        {
            // Arrange
            Solution* solution = new Solution();
            vector<int> nums = { 3,2,4 };
            int target = 6;
            vector<int> answer = { 1,2 };

            // Act
            vector<int> output = solution->twoSum(nums, target);
            std::sort(output.begin(), output.end());

            // Assert
            Assert::IsTrue(answer == output);
        }
        TEST_METHOD(TestMethod3)
        {
            // Arrange
            Solution* solution = new Solution();
            vector<int> nums = { 3,3 };
            int target = 6;
            vector<int> answer = { 0,1 };

            // Act
            vector<int> output = solution->twoSum(nums, target);
            std::sort(output.begin(), output.end());

            // Assert
            Assert::IsTrue(answer == output);
        }
    };
}
