int romanToInt(char * s){
    int len = strlen(s);
    int nums[len+1], answer = 0;
    //Assigning each char to an integer
    for(int i=0;i<len;i++){
        if(s[i]=='I')
            nums[i]=1;
        else if(s[i]=='V')
            nums[i]=5;
        else if(s[i]=='X')
            nums[i]=10;
        else if(s[i]=='L')
            nums[i]=50;
        else if(s[i]=='C')
            nums[i]=100;
        else if(s[i]=='D')
            nums[i]=500;
        else if(s[i]=='M')
            nums[i]=1000;
    }
    nums[len]=0;
    //getting the final integer
    for(int i=0;i<len;i++){
        if(nums[i]>=nums[i+1])
            answer = answer + nums[i];
        else{
                answer += nums[i+1]-nums[i];
                i++;
            }
    }
    //returning the said integer
    return answer;
}