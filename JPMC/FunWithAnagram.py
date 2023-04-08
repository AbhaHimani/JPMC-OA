def checkForAnagrams(word, arr):
   
    for x in arr:
        if (sorted(word) == sorted(x)):
            return True
    return False
            
def funWithAnagrams(text):
    limit = len(text)
    text.reverse()
    
    final_text = list(text)

   
    count = 0
    for i in range(0, limit):
        if text[i+1:] and checkForAnagrams(text[i], text[i+1:]):
            final_text.pop(i - count)
            count += 1

    return sorted(final_text)
