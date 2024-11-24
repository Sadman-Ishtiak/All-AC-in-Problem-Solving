bool isPalindrome(int x){
    long long unsigned int y = 0, temp = x;
    
    while(temp != 0){
        y = y * 10;
        y = y + temp % 10;
        temp = temp / 10;
    }
    if(y == x)
        return true;
    else
        return false;
}