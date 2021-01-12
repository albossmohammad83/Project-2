

int numDig(int value){
      int count = 0;
	 while (value > 0){
		 value = value /10;
	      count++;
	 }
    return count;
   }