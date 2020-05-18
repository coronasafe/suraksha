let str = React.string;
let logo: string = [%raw "require('./assets/logo.png')"];

[@react.component]
let make = () =>
  <div className="h-screen flex justify-center items-center px-4">
    <div className="max-w-sm rounded overflow-hidden shadow-lg p-4">
      <div className="px-6 py-4 text-center">
        <div className="font-black text-5xl mb-2"> {"Suraksha" |> str} </div>
        <p className="text-gray-700 text-base -mb-6">
          {"Powered by" |> str}
        </p>
        <img className="w-full" src=logo alt="Sunset in the mountains" />
      </div>
    </div>
  </div>;
