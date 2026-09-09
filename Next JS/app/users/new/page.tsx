"use client";
import Link from "next/link";
import { useRouter } from "next/navigation";
import React from "react";

const NewUserPage = () => {
  // let { push } = useRouter();
  // return (
  //   <button className="btn btn-primary" onClick={() => push("/users")}>
  //     Create
  //   </button>
  // );

  return (
    <Link href={"/users"}>
      <button className="btn btn-primary">Create</button>{" "}
    </Link>
  );
};

export default NewUserPage;
