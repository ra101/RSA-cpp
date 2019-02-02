# RSA-cpp<br>
ref 1: https://www.youtube.com/watch?v=wXB-V_Keiu8&t=2s<br>
ref 2: https://www.cs.cornell.edu/courses/cs5430/2015sp/notes/rsa_sign_vs_dec.php<br>
prime.h: https://github.com/60d-RA-3Eh/Random-Prime-Number-Generator-Engine-cpp<br>

## A prototype with all functioning of RSA algorithm:
createKey(seed);<br>
encript(msg, publicKey);<br>
encriptWithPadding(pad(msg), publicKey);<br>
decript(encMsg);<br>
decriptWithPadding(msg) ~~ decript(dePad(msg))<br>
sign(msg) ~~ decript(hash(msg)) <br>
verify(msg, signature, publickey) ~~ return (hash(msg) == encript(signature,publicKey))<br>
