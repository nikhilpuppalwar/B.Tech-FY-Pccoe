animals=['pig','dog','goat','bat','cat','bear']
try:
    cat_index=animals.index('cat')
except:
    cat_index='no cat is found'
print("{}".format(cat_index))