# What this collection does...?
So, basically, this specific set of programs is as follows :   
 * The victim program is representative of a simple innocent program, that has a defined job, in this case, to append "Victim was here" in a file named public.txt in the `/tmp` directory. This file, `public.txt` represents any regular data file available to any user on a system.
 * The attacker program is our malicious program, whose sole job is to force the CPU to context switch multiple times, so at some point, we will achieve a situation where the victim program would be executed, but the public data file would have been symbolically linked to the secret.txt file, which represents any sensitive file on a system. And since the CPU check read that the file is allowed to be written to, our victim program appends "Victim was here" to the secret containing file.
 * The `attacker.c` and `victim.c` files are simply the source codes for the two main programs.
 * The `exploit.sh` file is simply a bash script that I wrote to automate this whole exhibition.
