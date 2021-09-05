# Lab 02 - NOT FINALIZED

- [Lab Procedure](#Lab-Procedure)
- [Part 1 - Play with directories and naming](#Part-1---Play-with-directories-and-naming)
- [Extra Credit - Test your skills (10%)](#Extra-Credit---Test-your-skills-(10%))
- [Submission](#Submission)

## Lab Pre-Reqs

This lab assumes that you have completed [Lab 01](../Lab01/README.md)

- Ubuntu AWS machine exists and you can `ssh` in to the system
- You have connected to your GitHub repository for this course
  - If you forgot to bookmark it, the URL is:
  - `https://github.com/WSU-kduncan/ceg2350-YOURGITHUBUSERNAME`
- You have cloned the repository to your Ubuntu AWS instance
   - The thing you `ssh` into
- This is a great time to check your Lab01 feedback too!

## Lab Procedure:

Document your answers in a plain text file named `Lab02-LastName.txt` where LastName is your last name. At the top of the file please enter your personal details as follows:

```
Name: Your name
Email: Your email

```

For each part below, you will be asked to do an action or answer a question.  The actions are going to be commands - you will write the command you used as "answers" to the action requested.  You are allowed to use multiple commands to solve an action.  Just write down all that were needed to complete.  Check with the TAs if you need clarification.

```
Example:  
Prompt: Create a file named bubbles.txt
Answer: `touch bubbles.txt`
```

If you did something "wrong" make a note of it in your lab. These are learning experiences - writing them down will help you ask good questions later. 

## Part 1 - Play with directories and naming

Do this work in your AWS instance, in the folder you cloned from GitHub (Lab 01)  
   - If you were unsuccessful before, meet with the TAs and / or I
- **Useful commands for this part: `man, mkdir, cd, ls, pwd, mv`**

1. Create a folder named `Lab02`
2. In `Lab02`, create a directory called `DirA`
3. In `Lab02`, create a directory called `Dir B`
   - You must end up with a folder named `Dir B`
4. How do you go into `Dir B`?
5. Which of these uses a better naming convention, and why?
6. Rename `Dir B` to `DirB`


## Part 2: Create and edit a file (2 pt)

- **Useful commands for this part: `touch, vim`**

1. In `DirA`, create a file called `test.txt`
2. Put at least three lines of text in `test.txt` using `vim`  

## Part 3: Play with hidden files (3 pt)

- **Useful commands for this part: `cp, mv, ls`**

1. Make a copy of `test.txt` inside `DirA` named `.hiddentext.txt`
2. Write the command and flags needed to see the file in `DirA`

## Part 4: Regular bob

- **Useful commands for this part: `adduser, sudo, su, chown, pwd, cd, whoami`**

1. Create a new user named `bob`
2. What is the path to `bob`'s `home` directory?
3. Find a way for the `ubuntu` user to add a file to `bob`'s home directory named `fromubuntu.txt`
   - Write the command(s) you used.
   - Are you happy with your solution?
4. Switch to the user `bob`
5. Get to `bob`'s `home` directory
6. Can `bob` edit `fromubuntu.txt`?
7. Fix the permissions so that `bob` owns `fromubuntu.txt`
   - Hint: can `bob` use `sudo`?
8. Switch back to the `ubuntu` user & return to the `ubuntu` user's `home` directory

## Part 5 - Get a crew

- **Useful commands for this part: `addgroup, chown, chgrp`**

1. Create a new group named `crew`
2. Add `ubuntu` and `bob` to the `crew` group
3. Change the `ubuntu` user's home directory so that `crew` is the group
4. Switch user to `bob`
5. As `bob` create a file in the `ubuntu` user's `home` directory.
6. Why was this successful?


## Part 6 - [`sudo` make me a sandwich](https://xkcd.com/149/)

- **Useful commands for this part: `sudo`**

1. In the `ubuntu` user's `home` directory, make a file with `sudo` named `sudowho.txt`
2. What are the permissions of this file?
3. Without modifying the permissions fo the file, edit the file and add some text.

## Part 7 - `git` & GitHub (2 pts)

1. On your Ubuntu system we made on AWS (Lab01), go into the folder you cloned  
   **Useful Commands: `pwd, ls, cd`**
2. Create and open a file named `Lab02.md`  
   **Useful Commands: `vim`**
3. Check out the [Lab Template](LabTemplate.md)
  - View the [raw version of the Lab Template](https://raw.githubusercontent.com/pattonsgirl/Fall2021-CEG2350/main/Labs/Lab02/LabTemplate.md) 
4. Copy the format of the lab template and fill it in with your lab answers.
  - [Basic `vim` usage](https://www.howtoforge.com/vim-basics)
5. You have now made a new file, added some text to it, and (hopefully) made it look fancy... but how can we test this?
6. Use `git` commands to `add`, `commit` and `push` the file you made to GitHub.
  - If successful, when you go to the repository in your browser, you'll see `Lab02.md` as something you can click to view.
7. Now that you can see it, go back to your file and make tweaks if needed to fix the markdown.
  - Once you are done making changes, use `git` commands to `commit` and `push` the changes to GitHub - hitting refresh will show the updated version.

## Extra Credit - Test your skills (10%)

- **Useful commands for this part: All of the above!**

1. Create a file in `DirB` with the following permission set:  
   - `-rw-rw-rw- sally crew [size] [datetime] mydiary.txt`
   - where `[size]` and `[datetime]` are going to be unique for you
2. `sally` would like the file to be readable and writeable only by her.  Change the needed permissions to fix this.
3. Copy the new permission set listing and use it as the answer to this question.
4. `ubuntu` would like to edit `sally`'s `mydiary.txt` file, just to mess with her.  How can `ubuntu` do this without changing the permissions?
5. `bob` wants in on the joke to edit `sally`'s `mydiary.txt` file, just to mess with her.  How can `bob` do this without changing the permissions?


## Submission

- In the Pilot Dropbox, paste the URL to the `Lab02.md` file in your GitHub repo
    - URL should look like: https://github.com/WSU-kduncan/ceg2350-YOURGITHUBUSERNAME/blob/main/Lab02.md
