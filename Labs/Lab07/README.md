# Lab 07 - NOT FINALIZED

## Lab Procedure

**For each step, include the command you used to perform the direction or answer the question posed.** If you did something "wrong" make a note of it in your lab. These are learning experiences - writing them down will help you ask good questions later.  
`ssh` in to your AWS environment. If you've forgotten your key, you'll need to provision a new stack in AWS Educate and create a new key.  
See [Remaking your AWS Educate environment](../../..) for instructions.

1. Go to the folder in which you cloned your Git repository for this course.
   - Path of `/home/ubuntu/spring2021-ceg2350-YOURGITHUBUSERNAME/` OR `/home/ubuntu/git/spring2021-ceg2350-YOURGITHUBUSERNAME/` depending on your setup
2. Create a directory called `Lab07`
   - Path of `/home/ubuntu/spring2021-ceg2350-YOURGITHUBUSERNAME/Lab07` OR `/home/ubuntu/git/spring2021-ceg2350-YOURGITHUBUSERNAME/Lab07` depending on your setup
3. In this directory, create a file called `README.md`
4. This `README.md` file is where you will put your answers to this lab. I recommend creating two connections to your Linux AWS so you can keep the `README.md` file open while you expirement with the lab.
   - At the top of the file please enter your personal details as follows:

```
Name: Your name
Email: Your email

```

## Part 1: Create a filesystem from a file to store files (10 pts)

Perform the following in your AWS instance.  For this part, work in your user's home directory (`/home/ubuntu`), not your repository.  Your answers will still go in your `README.md` file associated with this lab.

1. Create a file of a defined amount of space: `dd if=/dev/zero of=space bs=1024 count=0 seek=$[1024*100]`
   - Explain `if` and `of` (.33 pt)
   - Explain what `/dev/zero` is (.33 pt)
   - What size file was created? (.33 pt)
2. Create a filesystem on this file.  Write the command you used. (1 pt)
   - **Useful commands:** `mkfs`
3. Mount the filesystem to your home directory in the folder `usable`.  Write the command you used. (1 pt)
   - **Useful commands:** `mount`, `mkdir`
4. Check to see if the filesystem was mounted according to the output of `df -h`  Paste the line that indicates where it was mounted and space usage (1 pt)
   - Notes: you may see and be wondering about `/dev/loop#`  loop is what happens when you are using a file that has a filesystem inside, which is exactly what happened - we used `dd` to create a file filled with 0's, then we used `mkfs` to have the file be a filesystem.
   - [More info on `/dev/loop#`](https://en.wikipedia.org/wiki/Loop_device)
5. Go in to the folder `usable` and create some new files with some text inside.  Write the steps this took and if you changed permission sets. (1 pt)
6. Unmount the filesystem currently mounted to `usable`.  Write the command you used. (1 pt)
   - **Useful commands:** `umount`
7. Can you still access the files?  Why or why not? (1 pt)
8. While the filesystem is still unmounted, run `strings` on `space`.  What do you see?  Can you see the contents of your files? (1 pt)
   - Notes: `cat` would work, but also might act like its hanging.  `strings` is kind of like `cat` but it will ONLY print the strings of printable characters in files.
9. Mount the filesystem once more, and delete / remove one of the files.  Unmount the filesystem, and run `strings` again.  Can you see the contents of your files? (1 pt)
   - Notes: this is the big scary deal about data and disks and making sure data gets overwritten on a disk if the data needs to truly go away.  When you delete a file, all you've done is delete the inode association (you can't vim it, and you can't use an inode to get back to it), but the data is still written to the disk until it is overwritten (which could happen given enough time).  Removing a file is like throwing away a letter.  If the letter is still whole, it can be pulled back out and read.
10. Add this filesystem to be automounted by the OS using `/etc/fstab` Write the line you added to `/etc/fstab` (1 pt)
      - Hint: the line should be in the format of:
         - `/absolute/path/to/filesystem` **tab** `/absolute/path/to/directory/to/mount/to` **tab** `defaults` **tab** `0 0`
         - [More info on `fstab`](https://en.wikipedia.org/wiki/Fstab)
      - Test your changes using the 'mount -a' command.  What does this command do?  
      - Use `df -h` or head back to your `usable` folder to verify the mount worked (as in the file(s) you didn't delete should be viewable in the folder with `ls`)

**Just in Case Resources:**
- [Mount broken volume to new system](https://www.xtivia.com/blog/recovering-aws-instance-doesnt-start/)

## Part 2: Gitting Branchy (6 pts)

1. Create a branch in your git repository called `development`
2. Switch to the branch.
3. Edit `README.md` to include the commands you used to create the branch and switch to the branch. (2 pts)
4. Push your changes (and your branch) to remote (GitHub) (1 pt - visual check)
   - Note: if you try `git push` git will spit out a helpful hint
5. On GitHub, switch to the branch and confirm that your edits to `README.md` exist in the `development` branch's version of the file, but not in the `main` branch's version.
6. Switch back to the `master`/`main` branch.
7. Merge the `development` branch with the `master`/`main` branch.
8. Edit `README.md` to include the commands you used to switch back to the `master`/`main` branch and merge the `development` branch with `master`/`main` (2 pts)
9. Push the `master`/`main` branch to remote (GitHub). 
10. In GitHub, confirm your file now exits in `master`/`main` with both the changes for branch creation and branch merging. (1 pt - visual check)

**Resources:**

- [Git Branches in a Nutshell](https://git-scm.com/book/en/v2/Git-Branching-Branches-in-a-Nutshell)
- [Git - Basic Branching & Merging](https://git-scm.com/book/en/v2/Git-Branching-Basic-Branching-and-Merging)

## Part 3: The Git Part (1 pt)

1. Use `git` commands to `add`, `commit` and `push` the `Lab07` folder to GitHub.

## Submission

In your GitHub repository, select the green `Code` button then select `Download ZIP`. Upload this zip file to the Pilot Dropbox.

In the `Comment` area in the Pilot Dropbox, copy URL / link to the repository corresponding to the project your are submitting.


