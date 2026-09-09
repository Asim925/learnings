import { notFound } from "next/navigation";
import React from "react";

interface props {
  params: { id: number };
}
const UserDetailsPage = ({ params: { id } }: props) => {
  if (id > 10) notFound();
  // if id is greater than 10 then show page not found
  return <div>user: {id}</div>;
};

export default UserDetailsPage;
