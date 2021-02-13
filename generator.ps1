$path = Read-Host "Last folder name"
$last = $path.Split("\")[-1].ToUpper()
$prefix = $args[0]
('A'..$last).ForEach( { 
        ($prefix + "\" + ($path -replace ".{2}$"))
        New-Item -path ($prefix + "\" + ($path -replace ".{2}$")) -name $_ -itemtype directory 
    })
