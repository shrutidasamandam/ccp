//determine whether the entered character is vowel or constant 
#include<stdio.h>
int main(){
    // initializng character
    char character;
    // prompts user for input
    printf("\nEnter your character to check if it is a vowel or constant: ");
    // takes in userinput as character 
    scanf("%s", &character);
    switch (character){
        // checks to see if character is A
        case 'A':
        // if it is, prints that the character is a vowel
            printf("\nThe character is a vowel");
            break;
        // checks to see if character is E
        case 'E':
        // if it is, prints that the character is a vowel
            printf("\nThe character is a vowel");
            break;    
        // checks to see if character is I
        case 'I':
        // if it is, prints that the character is a vowel
            printf("\nThe character is a vowel");
            break;  
        // checks to see if character is O
        case 'O':
        // if it is, prints that the character is a vowel
            printf("\nThe character is a vowel");
            break;     
        // checks to see if character is U
        case 'U':
         // if it is, prints that the character is a vowel
            printf("\nThe character is a vowel");
            break;  
        // checks to see if character is a  
        case 'a':
        // if it is, prints that the character is a vowel
            printf("\nThe character is a vowel");
            break;
        // checks to see if character is e
        case 'e':
        // if it is, prints that the character is a vowel
            printf("\nThe character is a vowel");
            break;    
        // checks to see if character is i 
        case 'i':
        // if it is, prints that the character is a vowel
            printf("\nThe character is a vowel");
            break;  
        // checks to see if character is o
        case 'o':
        // if it is, prints that the character is a vowel
            printf("\nThe character is a vowel");
            break;     
        // checks to see if character is u
        case 'u':
        // if it is, prints that the character is a vowel
            printf("\nThe character is a vowel");
            break;     
        default:
        // if not it is, prints that the character is a constant
            printf("\n The character is a constant");   
    }
    return 0;
}
