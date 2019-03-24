let BeerBt=99
function beerSong(BeerBt)
{
    if (BeerBt===0) {
        console.log ("No more bottles of beer on the wall, no more bottles of beer.\nWe've taken them down and passed them around; now we're drunk and passed out!\n");
    } else{
        console.log (BeerBt+" bottles of beer on the wall, "+BeerBt+" bottles of beer.\n");
        BeerBt-- ;
        console.log ("Take one down, pass it around, "+BeerBt+" bottles of beer...");
        beerSong(BeerBt);
    }
}
    
beerSong(BeerBt);
