Tell Git who you are 
		git config --global user.name "Sam Smith"

		git config --global user.email sam@example.com

Create a new local repository
		git init
		
Check out a repository
		git clone /path/to/repository

Add files
		git add <filename>

		git add *
		
		
Commit changes to head (but not yet to the remote repository):
		git commit -m "Commit message"
		
Commit any files you've added with git add, and also commit any files you've changed since then:
		git commit -a
		
Send changes to the master branch of your remote repository:
		git push origin master
		
List the files you've changed and those you still need to add or commit:
		git status
		
		
If you haven't connected your local repository to a remote server, add the server to be able to push to it:
		git remote add origin <server>
		

List all currently configured remote repositories:
		git remote -v
		
		
Push the branch to your remote repository, so others can use it:
		git push origin <branchname>
		
Push all branches to your remote repository:
		git push --all origin
		
Fetch and merge changes on the remote server to your working directory:
		git pull


Create a new branch and switch to it:
		git checkout -b <branchname>
		
Switch from one branch to another:
		git checkout <branchname>

List all the branches in your repo, and also tell you what branch you're currently in:
		git branch
		
Delete the feature branch:
		git branch -d <branchname>

To merge a different branch into your active branch:
		git merge <branchname>


View all the merge conflicts:
		git diff
		
View the conflicts against the base file:
		git diff --base <filename>
		
Preview changes, before merging:
		git diff <sourcebranch> <targetbranch>
		
After you have manually resolved any conflicts, you mark the changed file:
		git add <filename>
		
You can use tagging to mark a significant changeset, such as a release:
		git tag 1.0.0 <commitID>






