def containsDuplicate(nums):
    #One line using set
    return len(nums) != len(set(nums))
    #Full Solution using set approach
#    myhashset = set()
#    for x in nums:
#        if x in myhashset:
#            return True
#        myhashset.add(x)
    
    
    
