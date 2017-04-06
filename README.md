# Algorithms
This is a repository having Data Structure and Algorithms implementation.
For Contribution of new Algorithms Frok it.

### Getting Started - The Command Line ###
            https://git-scm.com/book/en/v2/Getting-Started-Installing-Git

Use Git Bash 

###  Sync your Repository

Always keep your local copy of repository updated with the original repository.
Before making any changes and/or in an appropriate interval, run the following 
commands *carefully* to update your local repository.
commands  to do so : 

    $ git fetch --all --prune                  # Fetch all remote repositories and delete any deleted remote branches
    $ git checkout master                      # Switch to `master` branch
    $ git reset --hard upstream/master         # Reset local `master` branch to match `upstream` repository's `master` branch  
    $ git push origin master                   # Push changes to your forked 

Whenever you are going to make contribution.
Please create seperate branch using command and
keep your `master` branch clean.

```sh
# It will create a new branch with name Branch_Name and switch to branch Folder_Name
$ git checkout -b Folder_Name
```
Create a seperate branch for contibution and try to use same name of branch as of folder.

To switch to desired branch
### To switch from one folder to other
        $ git checkout Folder_Name

To add the changes to the branch. Use
### To add all files to branch Folder_Name
        $ git add .

Type in a message relevant for the code reveiwer using
### This message get associated with all files you have changed
        $ git commit -m 'relevant message'

Now, Push your awesome work to your remote repository using
### To push your work to your remote repository
        $ git push -u origin Folder_Name
