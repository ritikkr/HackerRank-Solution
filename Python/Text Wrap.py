def wrap(string, max_width):
    if(len(string)<=0 or len(string)>=1000):
        exit()
    if(max_width<=0 or max_width>=len(string)):
        exit()

    wrapper = textwrap.TextWrapper(width=max_width) 
    word_list = wrapper.wrap(text=string) 
    #print(word_list)
    string=''
    for i in range(0,len(word_list)):
        string=string+word_list[i]+'\n'
    return(string)
