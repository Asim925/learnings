import React, { ReactNode } from "react";

interface Props {
  children: ReactNode;
}

const layout = ({ children }: Props) => {
  return (
    <div>
      <div className="h-screen p-4 w-64 bg-gray-800 text-white fixed overflow-y-auto">
        <div className="p-4 text-xl font-bold">Sidebar</div>
        <nav className="mt-4">
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Dashboard
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Profile
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Settings
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Logout
          </a>{" "}
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Dashboard
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Profile
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Settings
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Logout
          </a>{" "}
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Dashboard
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Profile
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Settings
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Logout
          </a>{" "}
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Dashboard
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Profile
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Settings
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Logout
          </a>{" "}
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Dashboard
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Profile
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Settings
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Logout
          </a>{" "}
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Dashboard
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Profile
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Settings
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Logout
          </a>{" "}
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Dashboard
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Profile
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Settings
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Logout
          </a>{" "}
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Dashboard
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Profile
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Settings
          </a>
          <a href="#" className="block px-4 py-2 hover:bg-gray-700">
            Logout
          </a>
        </nav>
      </div>
      <div className="ml-64 p-8">{children}</div>
    </div>
  );
};

export default layout;
