import "./App.css";
import Header from "./Header";
import HomePage from "./pages/home/HomePage";
import * as React from "react";

import Login from "./pages/login/Login";

import List from "./pages/list/List";
import New from "./pages/new/New";
import Single from "./pages/single/Single";
import { BrowserRouter as Router, Routes, Route, Link } from "react-router-dom";

function App() {
  return (
    <div className="App">
      <Router>
        <Routes>
          <Route path="/">
            <Route index element={<HomePage />} />
            <Route path="login" element={<Login />} />
            <Route path="login">
              <Route index element={<Login />} />
              <Route path="user" element={<List />} />
              <Route path="user">
                <Route index element={<List />} />
                <Route path=":userId" element={<Single />} />
                <Route path="New" element={<New/>}/>
                
              </Route>
            </Route>
          </Route>
        </Routes>
      </Router>
    </div>
  );
}

export default App;
