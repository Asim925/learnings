import Image from "next/image";
import Link from "next/link";
import ProductCard from "./components/ProductCard";
import Comments from "./components/Comments";
import { useGetTodos } from "./queries";

export default function Home() {
  const { data, isLoading } = useGetTodos();

  console.log(data, isLoading);

  return (
    <main>
      <h1>Main Page</h1>
      <Link href="/users">Users</Link>
      <ProductCard />
    </main>
  );
}
