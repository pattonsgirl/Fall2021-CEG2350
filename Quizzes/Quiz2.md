# Quiz 2

1. I type:  
    `cd bubbles`   
    The output is:  
    `-bash: cd: bubbles: No such file or directory`

    What is wrong?

    - Best answer: 
    - cd is trying to change directory. In this case, bubbles either does not exist or else cd can't see it from wherever the working directory is. For example, if bubbles was in /home/ubuntu/bubbles/ but you are currently in /etc/, you couldn't cd to bubbles using this command. You also couldn't get there if bubbles was a hidden folder, you'd need to use cd .bubbles

2. I type:  
    `cd bubbles`  
    The output is:  
    `-bash: cd: bubbles: No such file or directory`

    Suggest a solution

    - Depends on what's happening. Does bubbles already exist? Then first you must move to the directory where bubbles is located before using 'cd bubbles'. Does bubbles not exist yet? Then you can create a directory called "bubbles" using 'mkdir bubbles'.
    - Check your spelling. It's possible that the directory you're trying to enter is called "bubble", "bubbly", or something else.


3. A have a bash script named 'foo' with the following contents:

```
if [[ $1 = 'bubbles' ]]
then
    echo "I love bubbles, too!"
else
    echo "Fine, no bubbles"
fi
```

What is the output if I run:  
`source foo pop`  
On the command line?

- Fine, no bubbles
- This script does a string compare to see if the user entered "bubbles"
- "I love bubbles, too" would be the output if the script was run with "source foo bubbles"
- pop is not bubbles, so the else would trigger.

4. For the sort command, what option does a numeric sort?
    - n or g

5. I have crafted a regular expression: 'z[^io]+p' that should match:
    - zip
    - ziip
    - zoop

    But doesn't.    
    Write the correct regular expression that would match for those three inputs.

    Hint: you can totally go to regex101.com

    - z[io]+p

6. Environment variable that holds list of folders where executables exist:
    - PATH / $PATH
    - Lowercase path is technically incorrect

7. T/F I am in a folder I cloned from GitHub.  I create some new files (via vim, touch, etc.).  Next I `git push` to add the new content for tracking.
    - False
    - `git add filename(s)`
    - `git push` is a final step after making `commits` locally
