# Python program to demonstrate 
# Substitution Cipher 

import string 

# # A list containing all characters 
# all_letters= string.ascii_letters 
# all_letters+= " ";
# all_letters+= ".";
all_letters ="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#all_letters ="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
print("All letters:",all_letters);
print("length is ",len(all_letters));

print("=======================");
print("ENCRYPTION PROCESS");
print("=======================");

# plain_txt= "I AM STUDYING PYTHON PRGRAMMING"
# print("Given plain text is ",plain_txt);
# for key in range(0,1000):
#     print("Key is :",key);
#     dict1 = {} 
#     #key = 4
#     for i in range(len(all_letters)): 
#         dict1[all_letters[i]] = all_letters[(i+key)%len(all_letters)] 

#     print("Shifts=",dict1);

#     cipher_txt=[] 
#     # loop to generate ciphertext 

#     for char in plain_txt: 
#         if char in all_letters: 
#             temp = dict1[char] 
#             cipher_txt.append(temp) 
#         else: 
#             temp =char 
#             cipher_txt.append(temp) 

#     cipher_txt= "".join(cipher_txt) 
#     print("Cipher Text is: ",cipher_txt) 


#CIPHER TEXT LOGIC
#cipher_txt ="ERMPCOYQEV";
cipher_txt ="EOLGXPDDPZYGZNGDZFEOLCYG.CU.YD.DGFYPHLCDPEWGPDGEZGLKFJ.ELGDEFKLYEDGNZCGACZKFJEPHLG.YKGNFVNPVVPYMGVPHLDGPYG.GMVZI.VGLYHPCZYXLYEGIWGACZHPKPYMGZAAZCEFYPEPLDGNZCGPYELVVLJEF.VGMCZREOGPYKPHPKF.VGLYCPJOXLYEGDUPVVGKLHLVZAXLYEG.YKGXL.YPYMNFVGJ.CLLCGACLA.C.EPZYQGEOLGFYPHLCDPEWGILVPLHLDGPYGEOLGRZCEOGZNGEOLGPYKPHPKF.VG.YKG.JJLAEDGPEDGCLDAZYDPIPVPEWGNZCGKLHLVZAPYMGPYGPEDGDEFKLYEDGEOZDLGH.VFLDG.YKGJZXALELYJPLDGLDDLYEP.VGNZCGLNNLJEPHLGJPEPLYDOPAGPYG.YGLHLCJO.YMPYMGNCLLG.YKGKLXZJC.EPJGDZJPLEWQGNFCEOLCGEOLGFYPHLCDPEWGACZHPKLDG.YGLYHPCZYXLYEGJZYKFJPHLGEZGLSJLVVLYJLGPYGEL.JOPYMG.YKGVL.CYPYMGDJOZV.CDOPAGJCL.EPHLGLYKL.HZCDG.YKGDLCHPJLQ";
#cipher_txt = "KYQNDUHVIHMIVKIKQVGTUHKGNC";

print("=======================");
print("DECRYPTION PROCESS");
print("=======================");
for key in range(26):
    print("Key is :",key);
    dict2 = {}
    for i in range(len(all_letters)): 
        dict2[all_letters[i]] = all_letters[(i+key)%(len(all_letters))] 

    print("Shifts=",dict2);
    # loop to recover plain text 
    decrypt_txt = [] 

    for char in cipher_txt: 
        if char in all_letters: 
            temp = dict2[char] 
            decrypt_txt.append(temp) 
        else: 
            temp = char
            decrypt_txt.append(temp) 

    decrypt_txt = "".join(decrypt_txt) 
    print("Plain text :")
    print(decrypt_txt)


