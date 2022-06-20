import axios from "axios";
import React, { useState, useEffect } from "react";
import Coin from "./components/Coin";
import "./App.css";

function App() {
  const [listOfCoins, setListOfCoins] = useState([]);

  const [searchedCoin, setSearchedCoin] = useState(" ");

  useEffect(() => {
    axios
      .get("https://api.coinstats.app/public/v1/coins?skip=0")
      .then((response) => {
        setListOfCoins(response.data.coins);
        console.log(response.data.coins);
      });
  }, []);

  const filteredCoins = listOfCoins.filter((coin) => {
    return coin.name.toLowerCase().includes(searchedCoin.toLowerCase());
  });

  return (
    <div className="App">
      <div className="appHeader">
        <form action="">
          <input
            type="text"
            placeholder="Search Bitcoin..."
            onChange={(event) => setSearchedCoin(event.target.value)}
          />
        </form>
      </div>
      {filteredCoins.map((coin) => {
        return (
          <Coin
            key={coin.id}
            name={coin.name}
            icon={coin.icon}
            price={coin.price}
            symbol={coin.symbol}
            marketCap={coin.marketCap}
            priceChange1d={coin.priceChange1d}
          />
        );
      })}
    </div>
  );

  // return (
  //   <div className="App">
  //     <div className="appHeader">
  //       <input
  //         type="text"
  //         placeholder="Search Bitcoin..."
  //         onChange={(event) => setSearchedCoin(event.target.value)}
  //       />
  //     </div>
  //     <div className="appBody">
  //       {filteredCoins.map((coin) => {
  //         return (
  //           <Coin
  //             key={coin.id}
  //             name={coin.name}
  //             icon={coin.icon}
  //             price={coin.price}
  //             symbol={coin.symbol}
  //             marketCap={coin.marketCap}
  //             priceChange1d={coin.priceChange1d}
  //           />
  //         );
  //       })}
  //     </div>
  //   </div>
  // );
}

export default App;
