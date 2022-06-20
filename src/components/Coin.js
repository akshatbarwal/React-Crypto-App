import React from "react";
import "./Coin.css";

function Coin({ name, icon, price, symbol, marketCap, priceChange1d }) {
  return (
    <div className="coin-container">
      <div className="coin-row">
        <div className="coin">
          <img alt="" src={icon} />
          <h1>{name}</h1>
          <p className="coin-symbol">{symbol}</p>
        </div>
        <div className="coin-details">
          <p className="coin-price">Rs.{(price * 77).toFixed(2)}</p>
          {priceChange1d < 0 ? (
            <p className="coin-percent red">{priceChange1d.toFixed(2)}%</p>
          ) : (
            <p className="coin-percent green">{priceChange1d.toFixed(2)}%</p>
          )}
          <p className="coin-marketcap">
            Mkt Cap: Rs.{marketCap.toLocaleString()}
          </p>
        </div>
      </div>
    </div>
  );
}

{
  /* //   return (
  //     <div className="coin">
  //       <h1> Name: {name}</h1>
  //       <img alt="" src={icon} />
  //       <h3> Price: {price}</h3>
  //       <h3> Symbol: {symbol}</h3>
  //       <h3> Market Cap: {marketCap}</h3>
  //       <h3> Price Change: {priceChange1d}</h3>
  //     </div>
  //   ); */
}

export default Coin;
