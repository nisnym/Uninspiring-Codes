def mars():

       a=[1,2,3,4,5,6,7,8,9,10]

       dup=[]

       sack=[]

       sack2=[]

       b=[i for i in a if i not in dup]

       print("All stones on Mars :    ",a)

       print("")

       n = int(input("Enter number of elements :    "))

       print("")

       for i in range(0, n):

               ele = int(input("Duplicate stone no. {} :    ".format(i+1)))

               dup.append(ele)  

       b=[i for i in a if i not in dup]

       print("")

       print("Duplicate stones on Earth :    ",dup)

       print("")

       print("Remaining stones :    ",b)

       m=max(b)

       for i in b:

           for j in b[1:]:

               for k in b[2:]:

                   for x in b[3:]:

                       if i+j+k+x<m:

                           sack.extend(([[i,j,k,x]]))

                       elif i+j+k<=m:

                           sack.extend(([[i,j,k]]))

                       elif i+j<=m:

                           sack.extend(([[i,j]]))

       print("")

       max_cap=max(sack, key=len)

       for p in sack:

           if len(max_cap)==len(p):

               suck.append(p)

       res=[]

       for i in sack2:

               if i not in res:

                       res.append(i)

       print ("Maximum possible combinations of stones :    ",str(res))

       return res

mars()
