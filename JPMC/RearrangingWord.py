def rearrnging_word(word):
    if not word: return 'no answer'

    n = len(word)
    pre_ch = word[-1]
    for i in range(1, n):
        j = n-i-1
        if pre_ch>word[j]:
            return word[:j] + pre_ch + ''.join(sorted([word[j]]+list(word[j+2:])))
        pre_ch = word[j]
    return 'no answer'




