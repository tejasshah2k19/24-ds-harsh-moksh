void greet(){
    printf("\nhi");
    greet();//recursion -> function -> same function -> itself 
}

int main()
{

    greet(); 
    return 0;
}