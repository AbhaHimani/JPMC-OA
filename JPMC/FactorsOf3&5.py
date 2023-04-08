int count_pairs(int low, int high) {   
    int max_power_3 = log(high) / log(3);    
	int max_power_5 = log(high) / log(5);
    int count = 0;
    for (int x = 0; x <= max_power_3; x++) 
	{       
		for (int y = 0; y <= max_power_5; y++) {
            int val = pow(3, x) * pow(5, y);
            if (low <= val && val <= high) 
			{                   
				count++;
            }        
		}        
    }
    return count;
	}



#2nd-> cpp



def solution(lower, higher):
    if lower > higher:
        return -1
    arr_3 = [1]
    arr_35 = set([])

    k = 3
    while k <= higher:
        arr_3.append(k)
        if k >= lower:
            arr_35.add(k)
        k *= 3

    
    for i in arr_3: 
        k = i
        while k < lower:
            k *= 5
        while k <= higher:
            arr_35.add(k)
            k *= 5
    if lower == 1:
        arr_35.add(1)
    return len(arr_35)


