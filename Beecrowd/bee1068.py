while True:
    try:
        a = input()
        s = ""
        for i in a:
            if i in "()":
                s += i
        while "()" in s:
            s = s.replace("()", "")
        print('correct' if s == "" else 'incorrect')
    except:
        break