


def input_name():
    name = input('what is your name? ')
    return name

def input_surname():
    surname = input('what is your surname? ')
    return surname
def ouput_fullname(name,surname):
    print(' your name is {} {}'.format(name,surname))
def call():
    hi=input_name()
    go=input_surname()
    ouput_fullname(hi,go)
call()
  
