#include <stdio.h>

#define SIZE 5

int main() {
    /*
    Modify Programming Project 7 so that it prompts for five quiz grades for each of five students,
    then computes the total score and average score for each student, and the average
    score, high score, and low score for each quiz.

    Total score for each student is column sum, average score is average value of a column, average score for each quiz
    is for row sum, highscore and lowscore for each quiz is row max/min.
    */

    int class_grades[SIZE][SIZE] = {{0}}, student_grades[SIZE] = {0}, quiz_grades[SIZE] = {0}, student_index = 0,
    quiz_index = 0, quiz_average = 0, student_average = 0, quiz_highest = 0, quiz_lowest = 0;

    for (student_index = 0; student_index < SIZE; student_index++) {
        printf("Enter quiz grades for the %d° student: ", student_index + 1);

        for (quiz_index = 0; quiz_index < SIZE; quiz_index++) {
            scanf("%d", &class_grades[student_index][quiz_index]);
        }
    }

    for (student_index = 0; student_index < SIZE; student_index++) {
        for (quiz_index = 0; quiz_index < SIZE; quiz_index++) {
            student_grades[student_index] += class_grades[student_index][quiz_index];
            quiz_grades[quiz_index] += class_grades[student_index][quiz_index];
        }
    }

    printf("\nStudents total score:\n");

    quiz_highest = student_grades[0];
    quiz_lowest = student_grades[0];

    for (student_index = 0; student_index < SIZE; student_index++) {
        printf("Student %d total score: %d", student_index + 1, student_grades[student_index]);
        printf("\n");

        student_average += student_grades[student_index] / SIZE;

        if (student_grades[student_index] > quiz_highest)
            quiz_highest = student_grades[student_index];

        if (student_grades[student_index] < quiz_lowest)
            quiz_lowest = student_grades[student_index];
    }

    printf("\nAverage student grade: %d\n", student_average);

    printf("\nQuizzes total score:\n");

    for (quiz_index = 0; quiz_index < SIZE; quiz_index++) {
        printf("Quiz %d total score: %d", quiz_index + 1, quiz_grades[quiz_index]);
        printf("\n");

        quiz_average += quiz_grades[quiz_index] / SIZE;
    }

    printf("\nAverage quiz grade: %d\n", quiz_average);

    printf("\nQuiz highest grade: %d\n", quiz_highest);
    printf("Quiz lowest grade: %d\n", quiz_lowest);

    return 0;
}
