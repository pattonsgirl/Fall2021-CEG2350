# Lab 11 - NOT FINALIZED

- [Lab Procedure](#Lab-Procedure)
- [Part 1 - To Infinity](#Part-1---To-Infinity)
- [Submission](#Submission)
- [Rubric](#Rubric)

## Lab Procedure

In your terminal, head to your repository (the folder named `ceg2350-yourgithubusername).

Create a new directory, `Lab11`

Create a file named `Lab11.md` [based on the template](LabTemplate.md).

- [Raw version of LabTemplate.md](https://raw.githubusercontent.com/pattonsgirl/Fall2021-CEG2350/main/Labs/Lab11/LabTemplate.md)

For each part below, you will be asked to do an action or answer a question. The actions are going to be commands - you will write the command you used as "answers" to the action requested. You are allowed to use multiple commands to solve an action. Just write down all that were needed to complete. Check with the TAs if you need clarification.

If you did something "wrong" make a note of it in your lab. These are learning experiences - writing them down will help you ask good questions later.

## Submission

1. Verify that your GitHub repo has a `Lab11` folder with at minimum:

   - `Lab11.md`

2. In the Pilot Dropbox, paste the URL to the `Lab11` folder in your GitHub repo
   - URL should look like: https://github.com/WSU-kduncan/ceg2350-YOURGITHUBUSERNAME/tree/main/Lab11

## Rubric

- Part 1

# Lab 10 - NOT FINALIZED

## Lab Procedure

**For each step, include the command you used to perform the direction or answer the question posed.** If you did something "wrong" make a note of it in your lab. These are learning experiences - writing them down will help you ask good questions later.  
`ssh` in to your AWS environment. If you've forgotten your key, you'll need to provision a new stack in AWS Educate and create a new key.  
See [Remaking your AWS Educate environment](../../..) for instructions.

1. Go to the folder in which you cloned your Git repository for this course.
   - Path of `/home/ubuntu/spring2021-ceg2350-YOURGITHUBUSERNAME/` OR `/home/ubuntu/git/spring2021-ceg2350-YOURGITHUBUSERNAME/` depending on your setup
2. Create a directory called `Lab10`
   - Path of `/home/ubuntu/spring2021-ceg2350-YOURGITHUBUSERNAME/Lab10` OR `/home/ubuntu/git/spring2021-ceg2350-YOURGITHUBUSERNAME/Lab10` depending on your setup
3. In this directory, create a file called `README.md`
4. This `README.md` file is where you will put your answers to this lab. I recommend creating two connections to your Linux AWS so you can keep the `README.md` file open while you expirement with the lab.
   - At the top of the file please enter your personal details as follows:

```
Name: Your name
Email: Your email

```

## Part 1: Can do `conda` (12 pts)

Needing to install a package is not an uncommon request. To practice this skill, you will be installing `conda` (short for Anaconda Python).

- [Installation guide in full](https://docs.anaconda.com/anaconda/install/linux/)
- **Ammendment 4/15** Note on disk space: since the AWS systems are feeling a bit full, you may want to run the [commands listed here to free some space](https://github.com/pattonsgirl/Spring2021-CEG2350/blob/master/Labs/Lab10/clean-commands). If you are still having trouble, you have permission to install this on any Linux based terminal (WSL2, Moba+cygutils, etc.)

1. Check the current version of `python` when run with `python --version`. Write the output. (1 pt)
2. Download the installer for Linux Python 3.8 64-bit to your AWS system. Write the command you used. (1 pt)
   - **Useful commands**: `wget`, `curl`, `sftp`
   - Link to [all installers](https://www.anaconda.com/products/individual)
   - Link to [download the correct installer](https://repo.anaconda.com/archive/Anaconda3-2020.11-Linux-x86_64.sh)
3. Verify the integrity of your download by comparing the SHA-256 hash of the downloaded file to the hash listed on the site. Write the command you used to compute the hash and write the SHA-256 sum that was output. (1 pt)
   - Link to [hashes of installer](https://docs.anaconda.com/anaconda/install/hashes/Anaconda3-2020.11-Linux-x86_64.sh-hash/)
4. Looking at what your downloaded installer is quite interesting. Go ahead, `cat` it or, better, pipe it to `more`. Note there are **two** questions in the bullets for this part
   - **Ammendment 4/13** - you may need to also download the installer to your local system - not to install it, but just to view the file using Notepad / Notepad++ / VSCode. Turns out this file is big enough that it makes our AWS instances sad. Download the same installer, just to your local system instead. Open it with a text editor.
   - What you will see is a full installation script, from variables to licensing to checks it is running on your system for compatibility. - The coolest part, however, happens around line 377. The comment refers to a **tarball**. The line after computes the MD5 sum of the last 589 lines of the file to check its integrity.
   - **Ammendment 4/14** Use the command on line 378 in your terminal to see if you can get the same result: `tail -n +589 "$THIS_PATH" | md5sum -` and replace `"$THIS_PATH"` with your installer's file name. **Write the modified command**. (1 pt)
   - **Write the result of your command. Does your result match the result on line 379?** (1 pt)
   - _Here's why this is cool_: if you download the installation file, it includes all needed base libraries to install Anaconda. There are a chunk of base libraries (as you'll see during the install). These libraries have been tarred and gnu-zipped, the result of which (think `cat` of which) has been put at the bottom of the install script. This script includes (all in one file) a **tarball payload** so that it doesn't need to contact anything else on the network to finish the install, it just un-zips and un-tars the libraries. This is an example of tarball payload being used for good. This is a good moment to reflect of how tarball payloads could be snuck into an installer for less good.
5. You have downloaded a script that installs Anaconda python when the script is run (executed). Run the script using your choice of method, but write how you started the installation. (1 pt)
6. What directory did you install Anaconda to? Write the full path. (1 pt)
   - **Important**: use either the default of `/home/ubuntu/` OR `/opt/anaconda3/` Trying to install to a folder linked to GitHub will lead to sadness and pain.
7. Allow the installer to initialize Anaconda. What file was modified? (1 pt)
8. Take a look at that file (towards the bottom, changes were appended), and describe what changes were made. Think back to Lab04 when you played with a certain environment variable... (1 pt)
9. Why does it recommend we restart the shell / logout and back in? Think back to Lab03 when you messed with your system `.bashrc`... (1 pt)
10. Updated the shell as you see fit, write what you did. (1 pt)
11. Check the current version of `python` when run with `python --version`. You can also run `python` on its own which should verify again whcih version of `python` you are now running. Write the output. (1 pt)

- Note: this should be changed from before. If not, circle back to questions 6 & 7 and rethink your answers.

Note: after finishing this part, you can delete anaconda to make life easier down below. No other parts will use anaconda.

## Part 2: Getting Zippy (13 pts)

You will get the coolest effect from this portion if you successfully created the `space` "file" that we turned into a filesystem in Lab07. If not, don't sweat it, but the change in size is most notable.

1. Get the current size of your `ubuntu` user's home directory on AWS. Write the command you used and the size it output. (1 pt)
   - Hint: `du -sh /path/of/your/dreams/`
2. Look up and define the following flags for `tar`. It is recommended to use the `man` command - if you used something else just site your source(s). (1 pt)
   - `-c`
   - `-v`
   - `-f`
   - `-z`
   - `-x`
3. Use `tar` to create a tar ball of specific files / folders in your `ubuntu` user's home directory that you want to keep - it is most fun to also keep the `space` "file" you created in Lab07. Write the command you used. (1 pt)
   - **Important**: do **NOT** try to `tar` the `anaconda3` folder, assuming it is in your home directory.
4. What is the size of the `tar` file? (1 pt)
5. `cat` the `tar` file - is it readable? What does the format look like? (1 pt)
6. Use `gzip` (or a similar tool) to compress the `tar` file. Write the command you used. (1 pt)
7. What is the size of the `gzip` file? Is it smaller? (1 pt)
   - Note: circling back to the effect of the file system we created - we reserved an amount of space on the disk not by creating a partition, but by creating a large file and filling it with junk (`/dev/zero`) so that we could put a filesystem on it. However, when it came to using that filesystem, we created a measly couple of files and called it a day. Which meant there was a lot of unused space. Part, but not all, of what compression does is take away empty space - empty space now just gets a little "post-it" attached so that when uncompressed, the empty space comes back.
8. Compute the `md5sum` and `sha56sum` of the `gzip` file. Write the results. (1 pt)
9. Disconnect from your AWS instance or open a new terminal. Connect to your AWS instance via `sftp` instead of `ssh`. Write the command you used. (1 pt)
   - Hint: you might want to reference your `ssh` command in your `.bashrc` file assuming you've been using the `alias`
   - Hint 2: look at the man pages for both commands - do the flags do the same thing? Is the format of the command the same?
10. Using your `sftp` connection, download the `gzip` file to your local system. Write the command(s) you used. (1 pt)
11. On your local system, compute the `md5sum` and `sha56sum` of the `gzip` file. Write the results. Are they the same as the sums computed on your AWS system? (1 pt)
12. On your local system, uncompress and extract the `tar`'ed and `gzip`'ed file on your local system. Write the command(s) you used. (1 pt)
13. On your local system, go to one of your lab folders (as though you were in AWS). Try doing a `git push`. Why doesn't this work? Think back to ssh keys... (1 pt)

- Note: this will snapshot your directory, but there is more of the lab to go. You'll need to go through this process again if you'd like to get everything after you've made updates. Just a note since this class is wrapping up :)

## Part 3: SSH, learning in progress (7 pts)

In a previous labs, you downloaded a _private_ key from AWS and used it to sign in. You made a key pair on your AWS system and used it to create a passwordless authentication with GitHub. You have also created an ssh alias so that you can use a shortcut command instead of typing out your ssh connection everytime. Now you are going to create an ssh key on your local system, and use this new key to get into your AWS system.

1. On your local machine, identify what method you have been using to ssh in to your AWS system. This is your client. Consistentcy will be important here, especially for Windows users. Are you using Moba + Cygutils? WSL2? For Mac / Linux users, have you been using a local terminal? (1 pt)
2. Create a new ssh key on the client. Use the default directory / names. Do not enter a passphrase when prompted (just hit `Enter` to skip it). Write the command you used. (1 pt)
   - **Useful commands**: `ssh-keygen`
3. On your client, what directory your key was created in? (1 pt)
4. On your client, which is the private and which is the public key? How can you tell? (1 pt)
5. In another terminal, connect to your AWS system as you usually have. Write the full command you have been using to connect (you may need to view your `.bashrc` file) (1 pt)
6. View the current contents of `/home/ubuntu/.ssh/authorized_keys` and read through the following notes.
   - On a given system, usually for a given user account (in this case, `ubuntu`), the `authorized_keys` file contains all public keys that are allowed to authenticate as that user. If more users were created, and were going to use `ssh` keys for authentication, they would have their own `.ssh` folder with its own `authorized_keys` file with, again, a list of public keys that are allowed to authenticate as the user.
   - On the AWS system, there is an entry in the `ubuntu` user's `authorized_keys` that correlates back to the beginning of the course, when you created a key pair on AWS. AWS had you download the _private_ key. When you clicked through to create your environment, AWS put the _public_ key in the `ubuntu` user's `authorized_keys` file so that you could `ssh` from your system.
7. On your client, copy the newly created public key and _append_ it to `/home/ubuntu/.ssh/authorized_keys` on your AWS system. Write the process you used. (1 pt)
8. On your client, `ssh` in to the AWS system, but this time modify the old command to use your new private key instead of the one AWS had your download. Write your modified `ssh` command. There are at least two valid methods - you can use the hint to see if you can figure out the cleanest one. (1 pt)
   - Hint: previously, we had to use the `-i` flag with our `ssh` command because we were using a key with a non-default name (`aws-2350key.pem`) stored in a non-default location (your home directory) and therefore needed to use `-i` to specify where the _private_ key was for `ssh` to use it. If you did things correctly, you now have a key in a default location that `ssh` (the program) knows about, with a default name `ssh` (the program) can use. So I pose to you, do you need the `-i` flag or parameter?

## Part 4: The Git Part (1 pt)

**Don't `git add` the `anaconda.sh` installer. If you did, pop down to hints in the Submission section**

1. Use `git` commands to `add`, `commit` and `push` the `Lab10` folder to GitHub.

Don't `git add` the `anaconda.sh`. But if you did, this is for you:

- Easy way:

  - copy / sftp your Lab10 README.md file to your computer. Make sure you can read it on your computer.
  - remove (`rm -rf`) your repo folder.
  - on your GitHub page, click the Code button, then click Clone, then make sure SSH is selected. Copy that.
  - Back in your terminal, `git clone paste_what_you_copied`

- Hard way:
  - Set an amount of time you want to spend on this, debate going the easy way.
  - Resource to follow: https://docs.github.com/en/github/authenticating-to-github/removing-sensitive-data-from-a-repository
    - Go with `bfg` at your own risk. I hear it's easier. Follow those instructions if you go with `bfg`. Brag. Profit.
  - Be in the main folder of your repo. `spring2021-blah`
  - Run this, replace `Lab10/anaconda.sh` with anything specific to your situation (different caps, etc.)
  - Run this doozy, copy it all at once, paste it all at once, hit enter:

```
git filter-branch --force --index-filter \
"git rm --cached --ignore-unmatch Lab10/anaconda.sh" \
--prune-empty --tag-name-filter cat -- --all
```

- You _should_ see something similar to this:

```
> Rewrite 48dc599c80e20527ed902928085e7861e6b3cbe6 (266/266)
> Ref 'refs/heads/main' was rewritten
```

- If you don't, re-think going with the easy way. But also check your names versus what is in the command I pre-wrote for you and modify appropriately.
- Once the above seems happy, run: `git push origin --force --all`
- Check that `Lab10/README.md` made it to GitHub.
