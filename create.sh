dir="$1"
name="$2"

mkdir "$dir"

mkdir ./"$dir"/"$name"
touch ./"$dir"/"$name"/"$name".cpp
touch ./"$dir"/"$name"/io.txt
touch ./"$dir"/"$name"/notes.txt
cd ./"$dir"/"$name"
code "$name".cpp